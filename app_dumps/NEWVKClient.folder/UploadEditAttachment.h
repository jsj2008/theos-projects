/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DomainEditAttachment.h"

@class ClientBasedUploadOperation, UploadContext;

__attribute__((visibility("hidden")))
@interface UploadEditAttachment : DomainEditAttachment {
	UploadContext* _context;
	float _progress;
	ClientBasedUploadOperation* _operation;
}
@property(readonly, assign, nonatomic) BOOL longOperation;
@property(assign, nonatomic) float progress;
@property(readonly, retain, nonatomic) UploadContext* context;
@property(retain, nonatomic) ClientBasedUploadOperation* operation;
+(id)uploadAttachmentWithContext:(id)context;
-(void).cxx_destruct;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)opProgress;
-(void)opFinished;
-(void)clearResources;
-(id)createOperation;
-(void)clearOperation;
-(void)attachmentViewTapped;
-(id)imageVariants;
-(id)createViewForStyle:(id)style;
-(id)initWithContext:(id)context;
-(void)dealloc;
@end

