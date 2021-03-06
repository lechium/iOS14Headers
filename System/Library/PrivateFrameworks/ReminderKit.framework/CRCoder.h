/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ReminderKit/ReminderKit-Structs.h>
@class NSMutableOrderedSet, NSOrderedSet, NSDictionary;

@interface CRCoder : NSObject {

	NSMutableOrderedSet* _encodedObjects;
	Document* _currentDocument;
	NSOrderedSet* _clusterTypeSet;

}

@property (nonatomic,retain) NSMutableOrderedSet * encodedObjects;              //@synthesize encodedObjects=_encodedObjects - In the implementation block
@property (assign,nonatomic) Document* currentDocument;                         //@synthesize currentDocument=_currentDocument - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * clusterTypeSet;                   //@synthesize clusterTypeSet=_clusterTypeSet - In the implementation block
@property (nonatomic,readonly) NSDictionary * typeToClassDict; 
@property (nonatomic,readonly) NSOrderedSet * typeSet; 
+(void)registerCRClasses;
+(void)_registerClass:(Class)arg1 forType:(id)arg2 cluster:(BOOL)arg3 ;
+(void)registerClass:(Class)arg1 forType:(id)arg2 ;
-(NSMutableOrderedSet *)encodedObjects;
-(NSOrderedSet *)typeSet;
-(void)setCurrentDocument:(Document*)arg1 ;
-(void)setEncodedObjects:(NSMutableOrderedSet *)arg1 ;
-(Document*)currentDocument;
-(unsigned long long)typeIndexForClass:(Class)arg1 ;
-(NSDictionary *)typeToClassDict;
-(NSOrderedSet *)clusterTypeSet;
@end

