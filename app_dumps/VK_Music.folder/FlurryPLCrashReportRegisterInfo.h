/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface FlurryPLCrashReportRegisterInfo : XXUnknownSuperclass {
	NSString* _registerName;
	unsigned long long _registerValue;
}
@property(readonly, assign, nonatomic) unsigned long long registerValue;
@property(readonly, assign, nonatomic) NSString* registerName;
-(void)dealloc;
-(id)initWithRegisterName:(id)registerName registerValue:(unsigned long long)value;
@end

