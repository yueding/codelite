#include "ssh_account_info.h"
#if USE_SFTP
#include "xor_string.h"

SSHAccountInfo::SSHAccountInfo()
    : clConfigItem("ssh-account")
    , m_port(22)
{
}

SSHAccountInfo::~SSHAccountInfo()
{
}

SSHAccountInfo& SSHAccountInfo::operator=(const SSHAccountInfo& other)
{
    if ( &other == this )
        return *this;

    m_accountName = other.m_accountName;
    m_username    = other.m_username;
    m_password    = other.m_password;
    m_port        = other.m_port;
    m_host        = other.m_host;
    return *this;
}

void SSHAccountInfo::FromJSON(const JSONElement& json)
{
    m_accountName = json.namedObject("m_accountName").toString();
    m_username    = json.namedObject("m_username").toString();
    wxString pass = json.namedObject("m_password").toString();
    XORString x(pass);
    m_password = x.Decrypt();
    m_port        = json.namedObject("m_port").toInt(22);
    m_host        = json.namedObject("m_host").toString();
}

JSONElement SSHAccountInfo::ToJSON() const
{
    JSONElement element = JSONElement::createObject(GetName());
    element.addProperty("m_accountName", m_accountName);
    element.addProperty("m_username", m_username);
    element.addProperty("m_port", m_port);
    element.addProperty("m_host", m_host);

    XORString x(m_password);
    element.addProperty("m_password", x.Encrypt());
    return element;
}
#endif // USE_SFTP
