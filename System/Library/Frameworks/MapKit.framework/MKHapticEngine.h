/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UINotificationFeedbackGenerator, UIImpactFeedbackGenerator, _UIDragSnappingFeedbackGenerator;

@interface MKHapticEngine : NSObject {

	UINotificationFeedbackGenerator* _notificationGenerator;
	UIImpactFeedbackGenerator* _feedbackGenerator;
	_UIDragSnappingFeedbackGenerator* _dragSnappingGenerator;
	BOOL _isDragging;

}
-(void)prepare;
-(void)playSuccess;
-(void)draggedObjectLanded;
-(id)init;
-(void)playFailure;
-(void)draggedObjectLifted;
@end

