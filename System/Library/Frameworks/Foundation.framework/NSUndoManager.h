/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NSUndoManager : NSObject {

	id _undoStack;
	id _redoStack;
	NSArray* _runLoopModes;
	unsigned long long _NSUndoManagerPrivate1;
	id _target;
	id _proxy;
	void* _NSUndoManagerPrivate2;
	void* _NSUndoManagerPrivate3;

}

@property (readonly) long long groupingLevel; 
@property (getter=isUndoRegistrationEnabled,readonly) BOOL undoRegistrationEnabled; 
@property (assign) BOOL groupsByEvent; 
@property (assign) unsigned long long levelsOfUndo; 
@property (copy) NSArray * runLoopModes; 
@property (readonly) BOOL canUndo; 
@property (readonly) BOOL canRedo; 
@property (getter=isUndoing,readonly) BOOL undoing; 
@property (getter=isRedoing,readonly) BOOL redoing; 
@property (readonly) BOOL undoActionIsDiscardable; 
@property (readonly) BOOL redoActionIsDiscardable; 
@property (copy,readonly) NSString * undoActionName; 
@property (copy,readonly) NSString * redoActionName; 
@property (copy,readonly) NSString * undoMenuItemTitle; 
@property (copy,readonly) NSString * redoMenuItemTitle; 
+(void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)arg1 ;
+(void)_endTopLevelGroupings;
-(NSString *)undoActionName;
-(NSString *)redoMenuItemTitle;
-(void)setActionName:(id)arg1 ;
-(void)__redoSingle;
-(BOOL)canRedo;
-(void)removeAllActions;
-(void)_prepareEventGrouping;
-(BOOL)canUndo;
-(void)endUndoGrouping;
-(long long)groupingLevel;
-(void)undo;
-(void)_setGroupIdentifier:(id)arg1 ;
-(unsigned long long)levelsOfUndo;
-(id)_methodSignatureForTargetSelector:(SEL)arg1 ;
-(void)__redoCommonDoSingle:(BOOL)arg1 ;
-(void)_registerUndoObject:(id)arg1 ;
-(void)setActionIsDiscardable:(BOOL)arg1 ;
-(id)redoMenuTitleForUndoActionName:(id)arg1 ;
-(void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(BOOL)redoActionIsDiscardable;
-(void)dealloc;
-(BOOL)isRedoing;
-(void)_forwardTargetInvocation:(id)arg1 ;
-(BOOL)undoActionIsDiscardable;
-(void)_scheduleAutomaticTopLevelGroupEnding;
-(BOOL)groupsByEvent;
-(void)beginUndoGrouping;
-(void)removeAllActionsWithTarget:(id)arg1 ;
-(BOOL)isUndoRegistrationEnabled;
-(id)init;
-(void)disableUndoRegistration;
-(NSArray *)runLoopModes;
-(void)enableUndoRegistration;
-(void)_postCheckpointNotification;
-(id)_undoStack;
-(void)redo;
-(void)_cancelAutomaticTopLevelGroupEnding;
-(void)_processEndOfEventNotification:(id)arg1 ;
-(void)registerUndoWithTarget:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_delayAutomaticTermination:(double)arg1 ;
-(id)undoMenuTitleForUndoActionName:(id)arg1 ;
-(BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)arg1 ;
-(void)setLevelsOfUndo:(unsigned long long)arg1 ;
-(BOOL)isUndoing;
-(void)undoNestedGroup;
-(void)_rollbackUndoGrouping;
-(BOOL)_shouldCoalesceTypingForText:(id)arg1 :(id)arg2 ;
-(NSString *)redoActionName;
-(id)prepareWithInvocationTarget:(id)arg1 ;
-(void)setRunLoopModes:(NSArray *)arg1 ;
-(void)_commitUndoGrouping;
-(void)setGroupsByEvent:(BOOL)arg1 ;
-(NSString *)undoMenuItemTitle;
@end
