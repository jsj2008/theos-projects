/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_AudioPlayerModalViewController.h"


__attribute__((visibility("hidden")))
@interface VK_TrackListViewController : VK_AudioPlayerModalViewController {
	BOOL _needToMoveToPlayingTrack;
}
@property(assign, nonatomic) BOOL needToMoveToPlayingTrack;
-(void)moveToPlayingTrack;
-(void)tableControllerCellItemsAllocated:(id)allocated;
-(void)internalCloseModalViewController;
-(id)internalCreateTableControllerConfiguration;
-(unsigned short)internalAnaliticScreen;
-(id)internalTitle;
-(void)viewDidLoad;
@end

