/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, NSNumber, NSDate, NSData;

@interface _DKCustomMetadataMO : NSManagedObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSSet * event; 
@property (nonatomic,copy) NSNumber * doubleValue; 
@property (nonatomic,copy) NSNumber * integerValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSDate * dateValue; 
@property (nonatomic,copy) NSData * binaryValue; 
@property (nonatomic,copy) NSString * valueHash; 
+(id)fetchRequest;
@end

