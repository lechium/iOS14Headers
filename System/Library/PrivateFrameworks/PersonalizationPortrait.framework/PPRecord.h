/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PPSource, NSString;


@protocol PPRecord
@property (nonatomic,readonly) PPSource * source; 
@property (nonatomic,readonly) double initialScore; 
@property (nonatomic,readonly) NSString * extractionOsBuild; 
@property (nonatomic,readonly) unsigned extractionAssetVersion; 
@required
-(NSString *)extractionOsBuild;
-(double)initialScore;
-(unsigned)extractionAssetVersion;
-(PPSource *)source;

@end

