/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_BaseProfileViewController.h"
#import "VK_NetworkErrorListener.h"

@class NSArray, VK_ProfileModel, NSString;

__attribute__((visibility("hidden")))
@interface VK_CommonProfileViewController : VK_BaseProfileViewController <VK_NetworkErrorListener> {
	NSArray* _supportedTabs;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) VK_ProfileModel* profileModel;
@property(readonly, assign, nonatomic) unsigned profileTab;
@property(readonly, assign, nonatomic) BOOL isMyProfile;
@property(retain, nonatomic) NSArray* supportedTabs;
-(void).cxx_destruct;
-(void)internalAskPermissionToRemoveActionWithConfirmButton:(id)confirmButton andConfirmationBlock:(id)block;
-(void)removeMyAudioTrackCell:(id)cell;
-(void)networkErrorWithRequest:(id)request;
-(void)dataProviderDidDataChanged:(id)dataProvider;
-(id)internalSupportedTabs;
-(void)profileHeaderView:(id)view didSegmentSelected:(unsigned)selected;
-(id)favoritesShuffleCellProxy;
-(id)notesTableControllerConfiguration;
-(id)audioTableControllerConfiguration;
-(void)internalShowMessage:(id)message image:(id)image actionText:(id)text lock:(BOOL)lock andActionBlock:(id)block;
-(void)internalShowEmptyContentMessage;
-(id)internalCreateTableControllerConfiguration;
-(void)internalSetup;
-(void)dealloc;
-(void)viewDidLoad;
@end

