/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EKMappingProtocol.h"

@class NSArray, NSString, VK_TariffModel;

__attribute__((visibility("hidden")))
@interface VK_TariffsOptionsModel : XXUnknownSuperclass <EKMappingProtocol> {
	NSArray* _userTariffs;
	NSArray* _availableTariffs;
	unsigned _usedLimit;
	NSString* _notice;
	NSString* _otherPlatformNotice;
	VK_TariffModel* _currentTariff;
}
@property(retain, nonatomic) VK_TariffModel* currentTariff;
@property(retain, nonatomic) NSString* otherPlatformNotice;
@property(retain, nonatomic) NSString* notice;
@property(assign, nonatomic) unsigned usedLimit;
@property(retain, nonatomic) NSArray* availableTariffs;
@property(retain, nonatomic) NSArray* userTariffs;
@property(readonly, assign, nonatomic) BOOL onlyDefaultTariffAvailable;
+(id)objectMapping;
-(void).cxx_destruct;
@end

