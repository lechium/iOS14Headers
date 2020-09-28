/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NoteStoreObject, NSNumber, NSMutableSet;

@interface NoteChangeObject : NSManagedObject

@property (nonatomic,retain) NoteStoreObject * store; 
@property (nonatomic,retain) NSNumber * changeType; 
@property (nonatomic,retain) NSMutableSet * noteIntegerIds; 
@property (nonatomic,retain) NSMutableSet * noteServerIds; 
@property (nonatomic,retain) NSMutableSet * noteServerIntIds; 
@end
