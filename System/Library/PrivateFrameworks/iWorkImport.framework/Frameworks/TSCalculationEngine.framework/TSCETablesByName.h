/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, TSCECalculationEngine;

@interface TSCETablesByName : NSObject <NSCopying> {

	NSMutableDictionary* _tablesByTableNameByContainerName;
	TSCECalculationEngine* _calcEngine;

}
+(id)tableNameForTable:(id)arg1 ;
+(id)containerNameForTable:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAllObjects;
-(void)dropTable:(id)arg1 ;
-(id)description;
-(id)resolverMatchingName:(id)arg1 ;
-(id)resolversMatchingPrefix:(id)arg1 ;
-(BOOL)resolverNameIsUsed:(id)arg1 ;
-(id)initWithCalcEngine:(id)arg1 ;
-(void)dropTable:(id)arg1 withTableName:(id)arg2 withContainerName:(id)arg3 ;
-(void)addTable:(id)arg1 ;
-(id)tableForTableName:(id)arg1 containerName:(id)arg2 ;
-(void)renameTable:(id)arg1 fromName:(id)arg2 ;
-(id)anyTableForTableName:(id)arg1 ;
@end
