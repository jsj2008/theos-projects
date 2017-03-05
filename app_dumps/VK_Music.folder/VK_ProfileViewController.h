/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_CommonProfileViewController.h"

@class VK_UserBaseInfoModel;

__attribute__((visibility("hidden")))
@interface VK_ProfileViewController : VK_CommonProfileViewController {
	BOOL _loadingProfileInfo;
	VK_UserBaseInfoModel* _preloadedProfileInfoModel;
	VK_UserBaseInfoModel* _loadedProfileInfo;
}
@property(retain, nonatomic) VK_UserBaseInfoModel* preloadedProfileInfoModel;
@property(retain, nonatomic) VK_UserBaseInfoModel* loadedProfileInfo;
@property(assign, nonatomic) BOOL loadingProfileInfo;
-(void).cxx_destruct;
-(void)dataProviderErrorReceived:(id)received error:(id)error;
-(id)profileBaseInfoModel;
-(void)internalShowEmptyContentMessage;
-(id)segmentTitlesForProfileHeaderView:(id)profileHeaderView;
-(id)internalSupportedTabs;
-(id)titleForProfileHeaderView:(id)profileHeaderView;
-(id)internalCreateTableControllerConfiguration;
-(void)profileHeaderView:(id)view didSegmentSelected:(unsigned)selected;
-(void)reloadData;
-(BOOL)pullToRefreshEnabled;
-(void)profileInfoUpdateIfNeeded;
-(void)loadProfileDataIfNeeded;
@end

