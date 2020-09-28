/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSArray;

@interface NSSQLOrderIntermediate : NSSQLIntermediate {

	NSArray* _sortDescriptors;

}
-(id)_generateSQLForOrderedManyToManyInverse:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)_generateSQLForOrderedToManyInverse:(id)arg1 inContext:(id)arg2 ;
-(id)initWithSortDescriptors:(id)arg1 inScope:(id)arg2 ;
@end
