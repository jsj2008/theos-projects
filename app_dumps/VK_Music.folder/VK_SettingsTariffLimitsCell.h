/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_TableViewCellBase.h"
#import "VK_Music-Structs.h"

@class VK_SettingsTariffLimitsCellProxy, UILabel, VK_TariffsOptionsModel;

__attribute__((visibility("hidden")))
@interface VK_SettingsTariffLimitsCell : VK_TableViewCellBase {
	UILabel* _timeLeftLabel;
	UILabel* _usedTimeLabel;
	UILabel* _availableTimeLabel;
}
@property(assign, nonatomic) __weak UILabel* availableTimeLabel;
@property(assign, nonatomic) __weak UILabel* usedTimeLabel;
@property(assign, nonatomic) __weak UILabel* timeLeftLabel;
@property(readonly, assign, nonatomic) VK_TariffsOptionsModel* data;
@property(readonly, assign, nonatomic) VK_SettingsTariffLimitsCellProxy* proxy;
+(BOOL)internalCanHaveSeparator;
+(id)internalNibName;
-(void).cxx_destruct;
-(void)internalUpdateData;
@end

