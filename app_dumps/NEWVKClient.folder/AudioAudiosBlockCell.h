/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCell.h"

@class BlockCellHeaderView, AudioAudiosBlock, AudioAudiosPagingView;
@protocol AudioCellDelegate;

__attribute__((visibility("hidden")))
@interface AudioAudiosBlockCell : VKMCell {
	BlockCellHeaderView* _headerView;
	AudioAudiosPagingView* _audiosPagingView;
}
@property(retain, nonatomic) AudioAudiosBlock* domain;
@property(assign, nonatomic) __weak id<AudioCellDelegate> delegate;
@property(retain, nonatomic) AudioAudiosPagingView* audiosPagingView;
@property(retain, nonatomic) BlockCellHeaderView* headerView;
+(void)prerender:(id)prerender;
-(void).cxx_destruct;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)actionShowAllButton:(id)button;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
