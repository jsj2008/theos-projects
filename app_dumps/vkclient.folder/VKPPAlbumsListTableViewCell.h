/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class UIImageView, VKPPAlbumListControllerItem, UILabel, NSNumberFormatter;

@interface VKPPAlbumsListTableViewCell : XXUnknownSuperclass {
	BOOL _select;
	VKPPAlbumListControllerItem* _item;
	UIImageView* _albumPreviewImageView;
	UILabel* _albumNameLabel;
	UILabel* _assetsCountLabel;
	UIImageView* _check;
	NSNumberFormatter* _numberFormatter;
	CGSize _assetPreviewSize;
}
@property(assign, nonatomic) BOOL select;
@property(retain, nonatomic) VKPPAlbumListControllerItem* item;
@property(assign, nonatomic) CGSize assetPreviewSize;
@property(retain, nonatomic) NSNumberFormatter* numberFormatter;
@property(retain, nonatomic) UIImageView* check;
@property(retain, nonatomic) UILabel* assetsCountLabel;
@property(retain, nonatomic) UILabel* albumNameLabel;
@property(retain, nonatomic) UIImageView* albumPreviewImageView;
-(void).cxx_destruct;
-(void)getCollectionPreviewWithResultHandler:(id)resultHandler;
-(void)applyItem:(id)item;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
