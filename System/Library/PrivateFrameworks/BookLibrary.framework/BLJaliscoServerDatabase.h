/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, BLJaliscoServerInfo, NSSet;

@interface BLJaliscoServerDatabase : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) BLJaliscoServerInfo * server; 
@property (nonatomic,retain) NSSet * items; 
-(id)initIntoManagedObjectContext:(id)arg1 ;
@end

