/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate;

@interface FlurryPLCrashReportSystemInfo : XXUnknownSuperclass {
	int _operatingSystem;
	NSString* _osVersion;
	NSString* _osBuild;
	int _architecture;
	NSDate* _timestamp;
}
@property(readonly, assign, nonatomic) NSDate* timestamp;
@property(readonly, assign, nonatomic) int architecture;
@property(readonly, assign, nonatomic) NSString* operatingSystemBuild;
@property(readonly, assign, nonatomic) NSString* operatingSystemVersion;
@property(readonly, assign, nonatomic) int operatingSystem;
-(void)dealloc;
-(id)initWithOperatingSystem:(int)operatingSystem operatingSystemVersion:(id)version operatingSystemBuild:(id)build architecture:(int)architecture timestamp:(id)timestamp;
-(id)initWithOperatingSystem:(int)operatingSystem operatingSystemVersion:(id)version architecture:(int)architecture timestamp:(id)timestamp;
@end

