/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSUUID, UIImageView;


@protocol PUAssetPickerAsyncImageCell <NSObject>
@property (nonatomic,retain) NSUUID * asyncRequestID; 
@property (nonatomic,readonly) UIImageView * imageView; 
@property (assign,nonatomic) int imageRequestID; 
@property (nonatomic,readonly) CGSize imageRequestSize; 
@required
-(NSUUID *)asyncRequestID;
-(void)setAsyncRequestID:(id)arg1;
-(int)imageRequestID;
-(void)setImageRequestID:(int)arg1;
-(CGSize)imageRequestSize;
-(UIImageView *)imageView;

@end

