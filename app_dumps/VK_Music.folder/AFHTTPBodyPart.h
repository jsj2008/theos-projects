/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "VK_Music-Structs.h"

@class NSInputStream, NSDictionary, NSString;

@interface AFHTTPBodyPart : XXUnknownSuperclass <NSCopying> {
	int _phase;
	NSInputStream* _inputStream;
	unsigned long long _phaseReadOffset;
	BOOL _hasInitialBoundary;
	BOOL _hasFinalBoundary;
	unsigned _stringEncoding;
	NSDictionary* _headers;
	NSString* _boundary;
	id _body;
	unsigned long long _bodyContentLength;
}
@property(readonly, assign, nonatomic) unsigned long long contentLength;
@property(readonly, assign, nonatomic, getter=hasBytesAvailable) BOOL bytesAvailable;
@property(assign, nonatomic) BOOL hasFinalBoundary;
@property(assign, nonatomic) BOOL hasInitialBoundary;
@property(retain, nonatomic) NSInputStream* inputStream;
@property(assign, nonatomic) unsigned long long bodyContentLength;
@property(retain, nonatomic) id body;
@property(copy, nonatomic) NSString* boundary;
@property(retain, nonatomic) NSDictionary* headers;
@property(assign, nonatomic) unsigned stringEncoding;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)transitionToNextPhase;
-(int)readData:(id)data intoBuffer:(char*)buffer maxLength:(unsigned)length;
-(int)read:(char*)read maxLength:(unsigned)length;
-(id)stringForHeaders;
-(void)dealloc;
-(id)init;
@end

