/* vim: ft=objc
 *
 * Copyright 2005 Martin Hedenfalk <martin@bzero.se>
 *
 * This file is part of ShakesPeer.
 *
 * ShakesPeer is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * ShakesPeer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ShakesPeer; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#import <Cocoa/Cocoa.h>

@interface SPUserCommand : NSObject
{
    NSString *title;
    NSString *command;
    NSString *address;
    int type;
    int context;
}

- (id)initWithTitle:(NSString *)aTitle
            command:(NSString *)aCommand
               type:(int)aType
            context:(int)aContext
                hub:(NSString *)anAddress;
- (void)executeForNicks:(NSArray *)nickArray myNick:(NSString *)aMyNick;
- (NSString *)title;
- (NSString *)command;
- (NSString *)address;
- (int)type;
- (int)context;

@end

