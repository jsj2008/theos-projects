/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableData;

@interface VKOpusRecorder : XXUnknownSuperclass {
	char* _feedBuffer;
	unsigned long _feedBufferLen;
	OpaqueAudioQueue* _queue;
	AudioQueueBuffer* _queueBuffers[3];
	VKOpusEncRef _encoder;
	int _state;
	NSMutableData* _encodedData;
	NSMutableArray* _samples;
}
@property(retain, nonatomic) NSMutableArray* samples;
@property(retain, nonatomic) NSMutableData* encodedData;
@property(assign, nonatomic) int state;
-(void).cxx_destruct;
-(float)powerInDB:(BOOL)db peak:(BOOL)peak;
-(BOOL)enableMetering;
-(double)currentTime;
-(id)stop;
-(BOOL)record;
-(BOOL)prepareToRecord;
-(void)cleanup;
-(void)dealloc;
-(id)init;
-(void)writeBuffer:(AudioQueueBuffer*)buffer;
-(void)writeEncodedBufferToData:(const char*)data ofSize:(unsigned long)size;
@end

