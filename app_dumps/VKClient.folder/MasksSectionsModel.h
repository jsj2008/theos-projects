/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LoadingModel.h"

@class VKMaskSection;

__attribute__((visibility("hidden")))
@interface MasksSectionsModel : LoadingModel {
	int _new_masks;
	VKMaskSection* _selectedSection;
}
@property(retain, nonatomic) VKMaskSection* selectedSection;
@property(assign, nonatomic) int new_masks;
-(void).cxx_destruct;
-(void)handleMasksSectionMarkAsViewedAction:(id)action :(id)arg2;
-(void)registerForEvents:(id)events;
-(id)sections;
-(int)resultForRequestResponse:(id)requestResponse;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
@end
