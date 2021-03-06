/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsDaemon/TPSInclusivityValidation.h>

@class NSArray;

@interface TPSRegionsValidation : TPSInclusivityValidation

@property (nonatomic,readonly) NSArray * targetRegions; 
@property (nonatomic,readonly) NSArray * excludeRegions; 
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)targetRegions;
-(NSArray *)excludeRegions;
-(id)initWithTargetRegions:(id)arg1 excludeRegions:(id)arg2 ;
@end

