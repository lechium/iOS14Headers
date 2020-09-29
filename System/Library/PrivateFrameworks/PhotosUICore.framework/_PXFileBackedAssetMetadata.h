/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:03 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSDate, CLLocation;

@interface _PXFileBackedAssetMetadata : NSObject {

	NSDate* _date;
	CLLocation* _location;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                        //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(CLLocation *)location;
-(void)setSize:(CGSize)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(CGSize)size;
@end
