/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TimePickerControllerDelegate.h"
#import "VKClient-Structs.h"
#import "BaseSettingsController.h"

@class VKMCell, NSString;

__attribute__((visibility("hidden")))
@interface ModernSettingsController : BaseSettingsController <TimePickerControllerDelegate> {
	VKMCell* _cellNotifications;
	VKMCell* _cellDontDisturb;
	VKMCell* _cellHelp;
	VKMCell* _cellGeneral;
	VKMCell* _cellAccount;
	VKMCell* _cellPrivacy;
	VKMCell* _cellBlacklist;
	VKMCell* _cellLogout;
	VKMCell* _cellBalance;
	VKMCell* _cellSubscriptions;
	VKMCell* _cellAbout;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKMCell* cellAbout;
@property(retain, nonatomic) VKMCell* cellSubscriptions;
@property(retain, nonatomic) VKMCell* cellBalance;
@property(retain, nonatomic) VKMCell* cellLogout;
@property(retain, nonatomic) VKMCell* cellBlacklist;
@property(retain, nonatomic) VKMCell* cellPrivacy;
@property(retain, nonatomic) VKMCell* cellAccount;
@property(retain, nonatomic) VKMCell* cellGeneral;
@property(retain, nonatomic) VKMCell* cellHelp;
@property(retain, nonatomic) VKMCell* cellDontDisturb;
@property(retain, nonatomic) VKMCell* cellNotifications;
-(void).cxx_destruct;
-(void)actionVersion:(id)version;
-(void)openProfileEditing:(id)editing;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)timePickerCancel:(id)cancel;
-(void)timePicker:(id)picker selectedTime:(id)time;
-(BOOL)checkOrNotifyPushEnabled;
-(void)actionProfilePhoto:(id)photo;
-(void)render;
-(BOOL)APNSEnabled;
-(void)viewDidLoad;
-(void)notificationActivity:(id)activity;
-(id)initWithMain:(id)main andModel:(id)model;
-(void)dealloc;
@end

