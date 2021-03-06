/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, RLMRealm;


@protocol RLMCollection <NSFastEnumeration,RLMThreadConfined>
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) int type; 
@property (getter=isOptional,nonatomic,readonly) BOOL optional; 
@property (nonatomic,copy,readonly) NSString * objectClassName; 
@property (nonatomic,readonly) RLMRealm * realm; 
@required
-(RLMRealm *)realm;
-(BOOL)isOptional;
-(unsigned long long)indexOfObject:(id)arg1;
-(id)averageOfProperty:(id)arg1;
-(id)lastObject;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1;
-(id)firstObject;
-(id)sumOfProperty:(id)arg1;
-(id)valueForKey:(id)arg1;
-(id)sortedResultsUsingKeyPath:(id)arg1 ascending:(BOOL)arg2;
-(id)minOfProperty:(id)arg1;
-(unsigned long long)indexOfObjectWithPredicate:(id)arg1;
-(id)maxOfProperty:(id)arg1;
-(id)objectAtIndex:(unsigned long long)arg1;
-(unsigned long long)indexOfObjectWhere:(id)arg1 args:(char*)arg2;
-(int)type;
-(id)objectsWithPredicate:(id)arg1;
-(unsigned long long)count;
-(id)sortedResultsUsingDescriptors:(id)arg1;
-(id)objectsWhere:(id)arg1;
-(id)addNotificationBlock:(/*^block*/id)arg1;
-(unsigned long long)indexOfObjectWhere:(id)arg1;
-(void)setValue:(id)arg1 forKey:(id)arg2;
-(id)objectsWhere:(id)arg1 args:(char*)arg2;
-(NSString *)objectClassName;

@end

