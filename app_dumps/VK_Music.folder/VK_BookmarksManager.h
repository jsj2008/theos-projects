/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_BaseManager.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface VK_BookmarksManager : VK_BaseManager {
	NSMutableSet* _processedBookmarks;
}
@property(retain, nonatomic) NSMutableSet* processedBookmarks;
+(id)currentManager;
-(void).cxx_destruct;
-(void)updateBookmarkStatus:(BOOL)status forBookmarkBlock:(id)bookmarkBlock;
-(BOOL)addBookmarkToProcessedIfNeeded:(id)processedIfNeeded;
-(void)addOperation:(BOOL)operation forBookmarkBlock:(id)bookmarkBlock;
-(void)removeBookmark:(id)bookmark;
-(void)addBookmark:(id)bookmark;
-(void)setupBookmarksManager;
-(id)init;
@end

