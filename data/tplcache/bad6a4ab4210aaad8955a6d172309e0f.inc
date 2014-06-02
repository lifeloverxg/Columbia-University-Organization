
                [field:pagestyle runphp='yes'] @me= (@me==3 ? '<li>' : '');[/field:pagestyle]
                <a href='[field:linkurl/]' [field:pagestyle runphp='yes'] @me= (@me==3 ? 'class="pic"' : ''); [/field:pagestyle]>
                  <img src='[field:imgsrc/]' id='bigimg' [field:imgwidth /] border='0' />
                </a>
                <a href='[field:linkurl/]' [field:pagestyle runphp='yes']@me = (@me==3 ? 'class="title"' : '');[/field:pagestyle]>
                	[field:alttext/]
                </a>
                [field:pagestyle runphp='yes'] @me = (@me==3 ? '</li>' : ''); [/field:pagestyle]
             