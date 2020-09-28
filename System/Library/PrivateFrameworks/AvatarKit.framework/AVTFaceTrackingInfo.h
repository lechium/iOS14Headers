/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class ARFrame;

@interface AVTFaceTrackingInfo : NSObject {

	SCD_Struct_AV1* _trackingData;
	BOOL _deleteWhenDone;
	ARFrame* _arFrame;
	double _timestamp;

}

@property (nonatomic,readonly) ARFrame * arFrame; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) BOOL hasFaceTrackingData; 
+(id)trackingInfoWithARFrame:(id)arg1 inputOrientation:(long long)arg2 outputOrientation:(long long)arg3 ;
+(id)trackingInfoWithARFrame:(id)arg1 inputOrientation:(long long)arg2 outputOrientation:(long long)arg3 constrainHeadPose:(BOOL)arg4 ;
+(id)trackingInfoWrappingTrackingData:(SCD_Struct_AV1*)arg1 ;
+(id)trackingInfoWithARFrame:(id)arg1 ;
+(id)trackingInfoWithARFrame:(id)arg1 orientation:(long long)arg2 ;
-(void)dealloc;
-(double)timestamp;
-(ARFrame *)arFrame;
-(SCD_Struct_AV1*)trackingData;
-(BOOL)hasFaceTrackingData;
-(void)discardARFrame;
@end
