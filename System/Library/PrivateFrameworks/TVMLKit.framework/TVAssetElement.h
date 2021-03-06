/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:41 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewElement.h>

@class IKAssetElement, NSString, NSURL, NSNumber;

@interface TVAssetElement : TVViewElement

@property (nonatomic,readonly) IKAssetElement * assetElement; 
@property (nonatomic,readonly) NSString * actionParams; 
@property (nonatomic,readonly) NSString * adamID; 
@property (nonatomic,readonly) NSURL * extrasURL; 
@property (nonatomic,readonly) unsigned long long keyDelivery; 
@property (nonatomic,readonly) NSNumber * persistentID; 
@property (nonatomic,readonly) NSNumber * rentalAdamID; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSURL * url; 
-(unsigned long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)persistentID;
-(NSURL *)url;
-(NSString *)adamID;
-(NSURL *)extrasURL;
-(NSString *)actionParams;
-(unsigned long long)keyDelivery;
-(NSNumber *)rentalAdamID;
-(IKAssetElement *)assetElement;
@end

