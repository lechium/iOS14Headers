/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface STSPayload : NSObject {

	NSURL* _imageURL;
	NSURL* _videoURL;

}

@property (nonatomic,copy) NSURL * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSURL * videoURL;              //@synthesize videoURL=_videoURL - In the implementation block
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

