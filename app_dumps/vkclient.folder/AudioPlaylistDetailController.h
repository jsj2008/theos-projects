/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AudioPlaylistDetailModelDelegate.h"
#import "VKMLiveController.h"

@class AudioPlaylistView, AudioPlaylistDetailModel, TeaserView, NSString;

__attribute__((visibility("hidden")))
@interface AudioPlaylistDetailController : VKMLiveController <AudioPlaylistDetailModelDelegate> {
	AudioPlaylistView* _playlistView;
	TeaserView* _teaserFooterView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) AudioPlaylistDetailModel* model;
@property(retain, nonatomic) TeaserView* teaserFooterView;
@property(retain, nonatomic) AudioPlaylistView* playlistView;
-(void).cxx_destruct;
-(id)VKMLiveAudioPlaylistIden;
-(id)VKMControllerStatsRef;
-(int)VKMLiveAudioContext;
-(void)audioPlaylistDetailModel:(id)model didDeleteAudioPlaylist:(id)playlist;
-(void)audioPlaylistDetailModelDidUpdatePlaylist:(id)audioPlaylistDetailModel;
-(void)actionTeaserButton:(id)button;
-(void)actionAddMusic:(id)music;
-(void)actionEditCover:(id)cover;
-(void)actionNavToArtist:(id)artist;
-(void)actionShowMore:(id)more;
-(void)actionShowActions:(id)actions;
-(void)actionExpand:(id)expand;
-(void)actionEdit:(id)edit;
-(void)actionFollow:(id)follow;
-(void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
-(id)tableView:(id)view targetIndexPathForMoveFromRowAtIndexPath:(id)indexPath toProposedIndexPath:(id)proposedIndexPath;
-(BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
-(id)accessoryViewForAudio:(id)audio;
-(id)accessoryViewForObjectAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)VKMScrollViewUpdateTeaserView;
-(void)VKMScrollViewUpdateTeaserViewInsets;
-(BOOL)VKMScrollViewShouldShowTeaser;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)VKMTableUpdatedIndex;
-(void)updateEditButton;
-(BOOL)canEdit;
-(void)updateTitle;
-(void)updatePlaylist;
-(void)viewDidLoad;
-(id)initWithMain:(id)main andModel:(id)model;
-(void)dealloc;
@end

