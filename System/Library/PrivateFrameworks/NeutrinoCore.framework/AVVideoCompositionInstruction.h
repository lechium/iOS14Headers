/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol AVVideoCompositionInstruction <NSObject>
@property (nonatomic,readonly) SCD_Struct_NU15 timeRange; 
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
@required
-(SCD_Struct_NU15)timeRange;
-(BOOL)enablePostProcessing;
-(BOOL)containsTweening;
-(int)passthroughTrackID;
-(NSArray *)requiredSourceTrackIDs;

@end

