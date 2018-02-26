//
//  CmusRemoteSession.h
//  CmusRemote
//
//  Created by Yuwei Huang on 2/19/18.
//  Copyright © 2018 Yuwei Huang. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CmusTypes.h"

@interface CmusRemoteSessionCore : NSObject

- (BOOL)connectToHost:(NSString*)hostName
                 port:(NSString*)port
             password:(NSString*)password
                error:(NSError**)error;

- (CmusStatus*)getStatusWithError:(NSError**)error;

- (NSArray<CmusMetadata*>*)getListForView:(CmusViewType)viewType
                                    error:(NSError**)error;

- (BOOL)playWithError:(NSError**)error;
- (BOOL)pauseWithError:(NSError**)error;
- (BOOL)previousWithError:(NSError**)error;
- (BOOL)nextWithError:(NSError**)error;

- (BOOL)search:(NSString*)str error:(NSError**)error;

- (BOOL)activateWithError:(NSError**)error;

@end
