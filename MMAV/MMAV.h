#pragma once

class MMAVPacketPrivate;
class MMAVReaderPrivate;

class MMAVPacket {
public:
	MMAVPacket();
	~MMAVPacket();
	MMAVPacketPrivate* imp = nullptr;
};

class MMAVReader
{
public:
	MMAVReader();
	~MMAVReader();
	int Open(const char* path);
	int Close();

	int Read(MMAVPacket* packet);
private:
	MMAVReaderPrivate* imp = nullptr;
};

