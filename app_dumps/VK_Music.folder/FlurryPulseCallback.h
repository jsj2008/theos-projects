/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSDictionary, NSString;

@interface FlurryPulseCallback : XXUnknownSuperclass <NSCoding> {
	NSString* _partner;
	int _method;
	NSString* _uriTemplate;
	NSString* _bodyTemplate;
	int _maxRedirects;
	int _connectTimeout;
	int _requestTimeout;
	NSDictionary* _headers;
	long long _callbackId;
}
@property(retain, nonatomic) NSDictionary* headers;
@property(assign, nonatomic) long long callbackId;
@property(assign, nonatomic) int requestTimeout;
@property(assign, nonatomic) int connectTimeout;
@property(assign, nonatomic) int maxRedirects;
@property(retain, nonatomic) NSString* bodyTemplate;
@property(retain, nonatomic) NSString* uriTemplate;
@property(assign, nonatomic) int method;
@property(retain, nonatomic) NSString* partner;
+(int)pulseMethodStringToEnum:(id)anEnum;
+(id)pulseMethodEnumToString:(int)string;
+(id)pulseMethodsArrayInstance;
-(void).cxx_destruct;
-(id)dataDictionary;
-(void)encodeWithCoder:(id)coder;
-(id)initWithDictionary:(id)dictionary;
-(id)initWithCoder:(id)coder;
@end

