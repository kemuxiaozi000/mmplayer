# include "MMAV.h"
# include "MMAVPacketPrivate.h"
MMAVPacket::MMAVPacket() 
{
	pkt = av_packet_alloc();
}

MMAVPacket::~MMAVPacket() 
{
	if (pkt != nullptr) {
		av_packet_free(&pkt);
		pkt = nullptr;
	}
}
