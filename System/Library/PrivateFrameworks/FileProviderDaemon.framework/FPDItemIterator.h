/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProviderDaemon/FPDIterator.h>
#import <libobjc.A.dylib/FPXEnumeratorObserver.h>
#import <libobjc.A.dylib/FPDLifetimeExtender.h>

@protocol OS_dispatch_queue;
@class NSObject, FPItem, NSError, NSMutableArray, FPDExtension, FPDDomain, NSString;

@interface FPDItemIterator : FPDIterator <FPXEnumeratorObserver, FPDLifetimeExtender> {

	NSObject*<OS_dispatch_queue> _queue;
	FPItem* _current;
	unsigned long long _numFoldersPoped;
	BOOL _done;
	NSError* _error;
	NSMutableArray* _enumeratorByDepth;
	NSMutableArray* _remainingItemsByDepth;
	FPDExtension* _provider;
	FPDDomain* _domain;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int requestEffectivePID; 
@property (readonly) NSString * prettyDescription; 
-(void)_next;
-(void)dealloc;
-(void)_invalidateWithError:(id)arg1 ;
-(id)error;
-(void)enumerationResultsDidChange;
-(BOOL)done;
-(NSString *)prettyDescription;
-(void)_pushFolder:(id)arg1 ;
-(void)_popFolder;
-(void)didUpdateItem:(id)arg1 ;
-(int)requestEffectivePID;
-(void)_decorateItem:(id)arg1 ;
-(BOOL)_createEnumerator;
-(BOOL)_enumerateMoreItems;
-(id)_popItem;
-(BOOL)_shouldTraverseSubTree:(id)arg1 ;
-(id)initWithItem:(id)arg1 provider:(id)arg2 ;
-(id)nextWithError:(id*)arg1 ;
-(unsigned long long)numFoldersPopped;
@end

