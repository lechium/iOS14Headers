/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXLayoutInvalidationManager.h>

@protocol SXLayoutInvalidationManager <SXLayoutInvalidator>
@property (assign,nonatomic,__weak) id<SXLayoutInvalidationManagerDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<SXLayoutInvalidationManagerDelegate>)delegate;

@end


@protocol SXLayoutInvalidationManagerDelegate, SXLayoutBlueprintProvider;
@class NSMutableArray, NSMutableDictionary, NSString;

@interface SXLayoutInvalidationManager : NSObject <SXLayoutInvalidationManager> {

	BOOL _invalidationDispatched;
	id<SXLayoutInvalidationManagerDelegate> _delegate;
	id<SXLayoutBlueprintProvider> _layoutBlueprintProvider;
	NSMutableArray* _possibleInvalidations;
	NSMutableDictionary* _pendingInvalidations;

}

@property (nonatomic,readonly) id<SXLayoutBlueprintProvider> layoutBlueprintProvider;              //@synthesize layoutBlueprintProvider=_layoutBlueprintProvider - In the implementation block
@property (nonatomic,readonly) NSMutableArray * possibleInvalidations;                             //@synthesize possibleInvalidations=_possibleInvalidations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingInvalidations;                           //@synthesize pendingInvalidations=_pendingInvalidations - In the implementation block
@property (assign,nonatomic) BOOL invalidationDispatched;                                          //@synthesize invalidationDispatched=_invalidationDispatched - In the implementation block
@property (assign,nonatomic,__weak) id<SXLayoutInvalidationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelPendingInvalidationForComponent:(id)arg1 ;
-(id<SXLayoutBlueprintProvider>)layoutBlueprintProvider;
-(id)invalidateComponent:(id)arg1 state:(id)arg2 priority:(unsigned long long)arg3 ;
-(id)initWithBlueprintProvider:(id)arg1 ;
-(id)invalidateComponent:(id)arg1 state:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(void)setPendingInvalidations:(NSMutableDictionary *)arg1 ;
-(BOOL)invalidationDispatched;
-(void)mightInvalidateComponent:(id)arg1 ;
-(NSMutableArray *)possibleInvalidations;
-(id)invalidateComponent:(id)arg1 state:(id)arg2 suggestedSize:(CGSize)arg3 priority:(unsigned long long)arg4 ;
-(id)invalidateComponent:(id)arg1 suggestedSize:(CGSize)arg2 priority:(unsigned long long)arg3 ;
-(void)invalidateQueuedComponents;
-(void)setDelegate:(id<SXLayoutInvalidationManagerDelegate>)arg1 ;
-(NSMutableDictionary *)pendingInvalidations;
-(id<SXLayoutInvalidationManagerDelegate>)delegate;
-(id)invalidateComponent:(id)arg1 ;
-(void)setInvalidationDispatched:(BOOL)arg1 ;
-(id)invalidateComponent:(id)arg1 suggestedSize:(CGSize)arg2 ;
-(id)invalidateComponent:(id)arg1 state:(id)arg2 ;
@end

