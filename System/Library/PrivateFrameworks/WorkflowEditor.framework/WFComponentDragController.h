/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:02 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WFDragController.h>
#import <libobjc.A.dylib/CKComponentProvider.h>
#import <libobjc.A.dylib/CKComponentHostingViewDelegate.h>

@protocol NSObject;
@class CKComponentHostingView, WFAction, NSArray, NSString;

@interface WFComponentDragController : WFDragController <CKComponentProvider, CKComponentHostingViewDelegate> {

	id<NSObject> _model;
	CKComponentHostingView* _hostingView;

}

@property (nonatomic,__weak,readonly) CKComponentHostingView * hostingView;              //@synthesize hostingView=_hostingView - In the implementation block
@property (nonatomic,readonly) long long sizeRangeFlexibility; 
@property (nonatomic,copy,readonly) WFAction * action; 
@property (nonatomic,copy,readonly) NSArray * actions; 
@property (nonatomic,retain) id<NSObject> model;                                         //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)updateView;
-(NSArray *)actions;
-(WFAction *)action;
-(id<NSObject>)model;
-(void)setModel:(id<NSObject>)arg1 ;
-(void)loadView;
-(CKComponentHostingView *)hostingView;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(long long)sizeRangeFlexibility;
-(void)animateFromModels:(id)arg1 atPositions:(id)arg2 inSourceView:(id)arg3 ;
-(void)animateToModels:(id)arg1 atPositions:(id)arg2 inSourceView:(id)arg3 withWidth:(double)arg4 completion:(/*^block*/id)arg5 ;
@end
