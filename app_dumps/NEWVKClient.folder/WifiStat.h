/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface WifiStat : XXUnknownSuperclass {
	NSString* _ssid;
	NSString* _bssid;
}
@property(readonly, assign, nonatomic) NSString* bssid;
@property(readonly, assign, nonatomic) NSString* ssid;
+(id)currentStat;
+(id)ssid:(id)ssid bssid:(id)bssid;
-(void).cxx_destruct;
-(id)description;
-(id)initWithSsid:(id)ssid bssid:(id)bssid;
@end
