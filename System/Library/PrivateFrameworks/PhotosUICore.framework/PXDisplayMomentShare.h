/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSURL, NSDate, NSString;


@protocol PXDisplayMomentShare <PXDisplayAssetCollection,PXMediaTypeAggregating>
@property (nonatomic,readonly) unsigned short status; 
@property (nonatomic,readonly) unsigned long long assetCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) unsigned long long uploadedPhotosCount; 
@property (nonatomic,readonly) unsigned long long uploadedVideosCount; 
@property (nonatomic,readonly) NSURL * shareURL; 
@property (nonatomic,readonly) NSDate * expiryDate; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) long long px_momentShareType; 
@required
-(unsigned long long)videosCount;
-(unsigned long long)assetCount;
-(unsigned long long)photosCount;
-(NSURL *)shareURL;
-(unsigned long long)uploadedPhotosCount;
-(unsigned long long)uploadedVideosCount;
-(NSString *)localizedTitle;
-(NSDate *)expiryDate;
-(unsigned short)status;
-(NSDate *)endDate;
-(long long)px_momentShareType;
-(NSDate *)startDate;

@end
