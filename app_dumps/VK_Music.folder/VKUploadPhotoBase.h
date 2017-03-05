/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRequest.h"

@class UIImage, VKImageParameters, NSOperation;

@interface VKUploadPhotoBase : VKRequest {
	int _albumId;
	int _groupId;
	int _userId;
	VKImageParameters* _imageParameters;
	UIImage* _image;
}
@property(retain, nonatomic) UIImage* image;
@property(retain, nonatomic) VKImageParameters* imageParameters;
@property(assign, nonatomic) int userId;
@property(assign, nonatomic) int groupId;
@property(assign, nonatomic) int albumId;
@property(retain, nonatomic) NSOperation* executionOperation;
-(void).cxx_destruct;
-(id)methodName;
-(id)getSaveRequest:(id)request;
-(id)getServerRequest;
-(id)createExecutionOperation;
-(id)initWithImage:(id)image parameters:(id)parameters;
@end

