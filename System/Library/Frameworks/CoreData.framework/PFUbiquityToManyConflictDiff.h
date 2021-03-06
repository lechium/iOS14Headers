/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSString;

@interface PFUbiquityToManyConflictDiff : NSObject {

	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	NSString* _relationshipKey;

}

@property (nonatomic,readonly) NSMutableSet * insertedObjectIDs;              //@synthesize insertedObjectIDs=_insertedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * deletedObjectIDs;               //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSString * relationshipKey;                    //@synthesize relationshipKey=_relationshipKey - In the implementation block
-(NSMutableSet *)insertedObjectIDs;
-(void)dealloc;
-(NSMutableSet *)deletedObjectIDs;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initForRelationshipAtKey:(id)arg1 ;
-(void)diffWithLogSnapshot:(id)arg1 andPreviousSnapshot:(id)arg2 ;
-(NSString *)relationshipKey;
-(id)description;
@end

