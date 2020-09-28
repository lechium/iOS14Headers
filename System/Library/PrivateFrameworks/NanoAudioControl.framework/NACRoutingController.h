/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NACAudioRoute, NSArray;


@protocol NACRoutingController <NSObject>
@property (nonatomic,readonly) NACAudioRoute * pickedRoute; 
@property (nonatomic,readonly) NSArray * availableAudioRoutes; 
@property (assign,nonatomic,__weak) id<NACRoutingControllerDelegate> delegate; 
@required
-(id)initWithAudioCategory:(id)arg1;
-(NACAudioRoute *)pickedRoute;
-(void)setDelegate:(id)arg1;
-(id<NACRoutingControllerDelegate>)delegate;
-(void)beginObservingRoutes;
-(void)endObservingRoutes;
-(void)pickAudioRoute:(id)arg1;
-(NSArray *)availableAudioRoutes;

@end
