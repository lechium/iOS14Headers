/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDPersistence/IMDPersistence-Structs.h>
#import <IMDPersistence/IMAbstractDatabaseArchiver.h>

@interface IMAbstractDatabaseTrimmer : IMAbstractDatabaseArchiver
-(BOOL)copyDatabase:(/*^block*/id)arg1 ;
-(void)performMessageSelectionWithOperation:(IMDSqlOperation*)arg1 ;
-(BOOL)trimDatabaseWithOperation:(IMDSqlOperation*)arg1 ;
@end
