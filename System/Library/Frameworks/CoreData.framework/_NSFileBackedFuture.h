/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSUUID;


@protocol _NSFileBackedFuture
@property (readonly) NSURL * fileURL; 
@property (readonly) unsigned long long fileSize; 
@property (readonly) NSUUID * UUID; 
@required
-(unsigned long long)fileSize;
-(NSURL *)fileURL;
-(NSUUID *)UUID;

@end

