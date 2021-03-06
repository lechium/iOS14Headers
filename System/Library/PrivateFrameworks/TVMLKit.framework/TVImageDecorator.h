/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:41 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSString;

@interface TVImageDecorator : NSObject

@property (nonatomic,readonly) CGSize loaderScaleToSize; 
@property (nonatomic,readonly) BOOL loaderCropToFit; 
@property (nonatomic,readonly) CGSize expectedSize; 
@property (nonatomic,copy,readonly) NSString * decoratorIdentifier; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)decoratorIdentifier;
-(CGSize)loaderScaleToSize;
-(CGSize)expectedSize;
-(BOOL)loaderCropToFit;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
@end

