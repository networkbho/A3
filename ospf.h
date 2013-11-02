typedef struct _ospf_header_t
{
	uint8_t ospf_version;
	uint8_t ospf_type;
	uint16_t ospf_msg_length;
	uint32_t ospf_src_ip_addr;
	uint32_t ospf_area_id;
	uint16_t ospf_checksum;
	uint16_t ospf_auth_type;
	uint32_t ospf_auth;

} ospf_header_t;

#define HELLO 1
#define DB_DESCRIPTION 2
#define LINK_STATUS_REQUEST 3
#define LINK_STATUS_UPDATE 4
#define LINK_STATUS_ACK 5


typedef struct _ospf_lsa_t
{
	uint16_t ospf_age;
	uint16_t ospf_type;
	uint32_t ospf_id;
	uint32_t ospf_adv_router;
	uint32_t ospf_seq_number;
	uint16_t ospf_checksum;
	uint16_t ospf_length;
} ospf_lsa_t;
