/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_Music-Structs.h"
#import "VK_AudioPlayerModalViewController.h"

@class UIView, VK_TrackModel;

__attribute__((visibility("hidden")))
@interface VK_RecommendationsViewController : VK_AudioPlayerModalViewController {
	UIView* _noResultsView;
}
@property(assign, nonatomic) __weak UIView* noResultsView;
@property(readonly, assign, nonatomic) VK_TrackModel* trackModel;
-(void).cxx_destruct;
-(id)internalCreateTableControllerConfiguration;
-(id)internalTitle;
@end

