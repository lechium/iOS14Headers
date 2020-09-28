/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:43 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSPDocumentResourceInfo;


@protocol TSPDocumentResourceDataStorageInfo <NSObject>
@property (nonatomic,readonly) id<TSUResourceRequest> resourceRequest; 
@property (nonatomic,readonly) TSPDocumentResourceInfo * documentResourceInfo; 
@required
-(id<TSUResourceRequest>)resourceRequest;
-(TSPDocumentResourceInfo *)documentResourceInfo;

@end
